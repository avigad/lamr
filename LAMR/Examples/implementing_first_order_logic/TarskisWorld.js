import * as React from 'react'
import * as T from 'https://esm.run/three@0.162.0'
import { OrbitControls } from 'https://esm.run/three@0.162.0/addons/controls/OrbitControls.js'

const TILE_WIDTH = 2.0
const TILE_HEIGHT = 2.0
const N_ROWS = 8
const N_COLS = 8

function mkThreeScene(world) {
  const scene = new T.Scene()

  const tet = new T.TetrahedronGeometry(0.5, 0)
  const pink = new T.MeshStandardMaterial({ color: 0xff00ff })
  const tets = new T.InstancedMesh(tet, pink, world.tets.length)
  tets.castShadow = true
  tets.receiveShadow = true

  const cub = new T.BoxGeometry(1, 1, 1)
  const blue = new T.MeshStandardMaterial({ color: 0x00ffff })
  const cubs = new T.InstancedMesh(cub, blue, world.cubs.length)
  cubs.castShadow = true
  cubs.receiveShadow = true

  const dod = new T.DodecahedronGeometry(0.5, 0)
  const yellow = new T.MeshStandardMaterial({ color: 0xffff00 })
  const dods = new T.InstancedMesh(dod, yellow, world.dods.length)
  dods.castShadow = true
  dods.receiveShadow = true

  const tile = new T.BoxGeometry(2, 2, 0.1)
  const white = new T.MeshStandardMaterial({ color: 0xffffff })
  const tiles = new T.InstancedMesh(tile, white, N_ROWS*N_COLS)
  tiles.receiveShadow = true

  const Ss = new T.Matrix4().makeScale(0.6, 0.6, 0.6).setPosition(0, 0, 0.3)
  const Sm = new T.Matrix4().makeScale(1.0, 1.0, 1.0).setPosition(0, 0, 0.5)
  const Sl = new T.Matrix4().makeScale(1.3, 1.3, 1.3).setPosition(0, 0, 0.65)
  const szToScale = sz => {
    if (sz === '-') return Ss
    if (sz === ' ') return Sm
    if (sz === '+') return Sl
    return Sm
  }
  const setMatrices = (inst, objs, isTet) => {
    for (let i = 0; i < objs.length; i++) {
      const [c, r, sz] = objs[i]
      const S = szToScale(sz)
      const Tr = new T.Matrix4().makeTranslation(
        -TILE_WIDTH*0.5 - N_ROWS/2*TILE_WIDTH + c*TILE_WIDTH,
        -TILE_HEIGHT*0.5 - N_COLS/2*TILE_HEIGHT + r*TILE_HEIGHT,
        isTet ? -S.elements[14]*0.6 : 0)
      if (isTet) { // rotate tets to be upright
        const Rt = new T.Matrix4().makeRotationFromEuler(new T.Euler(-Math.PI/4+0.2, Math.PI/4, 0))
        inst.setMatrixAt(i, Tr.multiply(S).multiply(Rt))
      } else
        inst.setMatrixAt(i, Tr.multiply(S))
    }
    inst.instanceMatrix.needsUpdate = true
  }
  setMatrices(tets, world.tets, true)
  setMatrices(cubs, world.cubs, false)
  setMatrices(dods, world.dods, false)

  for (let r = 0; r < N_ROWS; r++) {
    for (let c = 0; c < N_COLS; c++) {
      const Tr = new T.Matrix4().makeTranslation(
        -TILE_WIDTH*0.5 - N_ROWS/2*TILE_WIDTH + c*TILE_WIDTH,
        -TILE_HEIGHT*0.5 - N_COLS/2*TILE_HEIGHT + r*TILE_HEIGHT,
        0)
      tiles.setMatrixAt(r*N_COLS + c, Tr)
      if ((r + c) % 2 === 1) {
        tiles.setColorAt(r*N_COLS + c, new T.Color(0xffffff))
      }
    }
  }
  tiles.instanceMatrix.needsUpdate = true
  tiles.instanceColor.needsUpdate = true

  scene.add(tets)
  scene.add(cubs)
  scene.add(dods)
  scene.add(tiles)

  const ambLight = new T.AmbientLight(0xa0a0a0)
  scene.add(ambLight)

  const light = new T.PointLight(0xffffff, 1000, 1000)
  light.position.set(5, -5, 10)
  light.castShadow = true
  scene.add(light)

  scene.background = new T.Color(0x98afd2)

  return scene
}

export default function(props) {
  const disposeFn = React.useRef(() => {})
  const divRef = React.useRef(null)
  const sceneRef = React.useRef(mkThreeScene(props.world))
  const render = () => {
    if (!divRef.current) return
    if (!sceneRef.current) return
    disposeFn.current()

    const div = divRef.current
    const width = div.clientWidth
    const height = div.clientWidth

    const renderer = new T.WebGLRenderer()
    renderer.shadowMap.enabled = true
    renderer.setSize(width, height)

    const camera = new T.PerspectiveCamera(75, width / height, 0.1, 1000)
    const controls = new OrbitControls(camera, renderer.domElement)

    camera.position.set(0, -20, 10)
    controls.update()

    const scene = sceneRef.current

    const animate = () => {
      let state = { running: true }
      if (!state.running) return
      disposeFn.current = () => { state.running = false }

      requestAnimationFrame(animate)
      renderer.render(scene, camera)
    }
    animate()

    if (div.firstChild) div.replaceChild(renderer.domElement, div.firstChild)
    else div.appendChild(renderer.domElement)
  }

  React.useEffect(() => {
    sceneRef.current = mkThreeScene(props.world)
    render()
  }, [props.world])
  const setRef = React.useCallback(div => {
    divRef.current = div
    render()
  }, [])
  return React.createElement('details', { open: true }, [
    React.createElement('summary', { className: 'mv2 pointer' }, "Tarski's World"),
    React.createElement('div', { ref: setRef }, [])
  ])
}