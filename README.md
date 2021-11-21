# Logic and Mechanized Reasoning

This repository is designed to accompany the course by the same name. See also:

- the textbook (in progress): [https://avigad.github.io/lamr](https://avigad.github.io/lamr)
- a PDF version of the textbook: [https://avigad.github.io/lamr/logic_and_mechanized_reasoning.pdf](https://avigad.github.io/lamr/logic_and_mechanized_reasoning.pdf)
- the course home page: [https://www.cs.cmu.edu/~mheule/15217-f21/](https://www.cs.cmu.edu/~mheule/15217-f21/)

This repository contains a supporting library
and files containing examples from the textbook that you can edit and experiment with.

The course requires the Lean 4 programming language and theorem prover, as well as
three additional automated reasoning tools: CaDiCaL (a SAT solver), Z3 (an SMT solver), and
Vampire (a resolution theorem prover).

There are three ways for you to use the software and supporting libraries.

## Option 1: Use Gitpod and the source repository

This is the easiest option. Gitpod will give you 50 free hours every month to run a virtual
workspace through your browser.

1. Register for Gitpod account at [https://gitpod.io/login/](https://gitpod.io/login/).

2. Go to [https://gitpod.io/#/https://github.com/avigad/lamr](https://gitpod.io/#/https://github.com/avigad/lamr). In other words, preface the url of this repository with `https://gitpod.io/#`.
This will start a new workspace based on this repository.

3. It may take a little while for the workspace to start, but when it does, you will be looking
at a VS Code editor window with a terminal at the bottom and a file browser on the left.
If you open the file `User/Examples/hello_world.lean`, you should see output in a `Lean Infoview`
window. Also, hovering over the `#eval` commands with the blue squiggly lines underneath should
show you the output of those commands.

4. The `User` folder is a good place to put all your files.
The folder `LAMR/Examples` contains all the examples in the textbook.
We recommend copying the
`LAMR/Examples` folder to the `User` folder so that you can edit those files
and experiment with them to your heart's content.
You should not edit anything in the `Mathlib` or `LAMR` folders, so `LAMR/Examples`
will always contain the original copies.

5. When you are done, choose `Stop workspace` from the menu on the left. The workspace should also
stop automatically 30 minutes after the last interaction or 3 minutes after closing the tab.

If you have a local version of VS Code installed on your computer, you can even use that to work
inside the virtual machine.
From the menu icon with three lines at the left-hand side of the browser window for the virtual
machine,
click "open in VS Code" and follow the instructions.

Every time you return to the link in Step 2, Gitpod will start a fresh workspace. To restart a
previous workspace, go to [https://gitpod.io/workspaces/](https://gitpod.io/workspaces/).
If you change the filter from `Active` to `All`, you will see all your recent workspaces.
You can pin a workspace to keep it on the list of active ones.

With this method, you can save files on a virtual machine and start and stop it at will.
There isn't an easy way to transfer files from the virtual machine to your own computer,
but you can simply copy text from the editor in the browser and paste it anywhere you want.



## Option 2: Use Gitpod and a forked repository

Git is a powerful version control system and [Github](https://github.com/) allows you to share
repositories in the cloud. If you are familiar with these or willing to
[learn](https://guides.github.com/) how to use them, you can fork this repository to your
github account and use the fork as a file system for the virtual machine.

1. Create a fork of [https://github.com/avigad/lamr](https://github.com/avigad/lamr) by clicking
the `Fork` button in the upper right corner.

2. Follow the instructions above to start a virtual machine on your copy of the repository.

You can merge updates from the master `lamr` repository clicking `Fetch upstream` from your
repository page on Github. And now you can use the usual git commands from the terminal inside
your virtual machine to synchronize with your copy of the repository. Use `git pull` to update the
local copy in the virtual machine from your repository, and use `git commit` and `git push` to
transfer changes from the virtual machine to your repository.


## Option 3: Install Lean, the repository, and course software locally

It should not be too hard to install Lean and all the course software on your own computer,
on Windows, OS/X, or Linux.

1. Install Lean and VS Code following the instructions [here](https://leanprover.github.io/lean4/doc/quickstart.html).

2. Clone this repository, using `git clone` or the `Download ZIP` option on the `Code` button
above.

3. Inside the top folder of the repository, type `lake build` to compile the library files.
Also, copy the examples folder from the `LAMR` folder to the `User` folder.

4. Open the repository folder in VS Code.

From there, you should be able to use Lean and experiment with the example files as described in
Option 1.

## To update

We will update the repository, including the examples folder, as the course proceeds.
When you use Gitpod to start a new virtual machine, it will use the current version of the repository.

If you are using on old virtual machine or a local version of the repository, however,
you can update it by typing the following commands from inside the repository folder:
```
  git pull
  lake build
```
You will then have to manually copy new files from the `LAMR/Examples`
folder to the `User/Examples` folder.
You may have to type `elan update` if you installed Lean a while ago.

If you have forked the repository on Github, you can update the fork by clicking the "fetch upstream"
button.

## To use automated reasoning tools

The `LAMR/bin` folder in the repository contains Linux binaries for CaDiCaL, Z3, CVC4, CVC5, and Vampire.
We provide procedures for calling them from Lean, and the `LAMR/Examples` folder has some examples.
If you are using the course with Gitpod or locally with Linux, the external tools will hopefully work
out of the box. If you are using OS/X or Windows, however, you will have to obtain or build the relevant
binaries on your own and replace the ones in `LAMR/bin`. You can find information how to do that here:

- [CaDiCaL](https://github.com/arminbiere/cadical).
- [Z3](https://github.com/Z3Prover/z3)
- [CVC4](https://cvc4.github.io/)
- [CVC5](https://github.com/cvc5/cvc5)
- [Vampire](https://vprover.github.io/)

Building CaDiCaL for Windows seems difficult.
You do not need all three SMT solvers; any one of Z3, CVC4, or CVC5 will do.

















