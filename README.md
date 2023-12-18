# Logic and Mechanized Reasoning

This repository is designed to accompany the course by the same name. See also:

- the textbook (in progress): <https://avigad.github.io/lamr>
- a PDF version of the textbook: <https://avigad.github.io/lamr/logic_and_mechanized_reasoning.pdf>
- the course home page: <https://www.cs.cmu.edu/~mheule/15311-s24/>

This repository contains a supporting library
and files containing examples from the textbook that you can edit and experiment with.

The course requires the Lean 4 programming language and theorem prover, as well as
three additional automated reasoning tools: CaDiCaL (a SAT solver), Z3 (an SMT solver), and
Vampire (a resolution theorem prover).

There are three ways for you to use the software and supporting libraries.

## Option 1: use this repository on your computer

1. Install Lean 4 and VS Code following these
   [instructions](https://leanprover-community.github.io/get_started.html).

2. Make sure you have [git](https://git-scm.com/) installed.

3. If you have not logged in since you installed Lean and Mathlib, then you may need to first type
   `source ~/.profile` or `source ~/.bash_profile` depending on your OS.

4. Open a terminal, navigate to the directory where you want to clone the repository, and type:
   ```
   git clone git@github.com:avigad/lamr.git
   cd lamr
   lake exe cache get
   lake build
   ```
   This fetches the repository and builds it.

6. Launch VS Code by typing `code .` or start VS Code some other way and open the `lamr` folder.
   Note that you have to open the top level `lamr` repository folder, not any other folder.

From the file explorer on the left-hand side, you can now open `.lean` files such as the ones in
the directory `LAMR/Examples`. We recommend putting your own files in the `User` folder
and leaving the original content intact.

Note that the files in `LAMR/bin` are Linux binaries of automated reasoning tools. If you are
using MacOS or Windows you need to replace these with appropriate versions. (See below.)

You can update to a newer version of the repository by typing the following in the `lamr`
repository folder:
```
  git pull
  lake exe cache get
  lake build
```

## Option 2: use this repository with Github Codespaces

You can also use this repository with Lean running in the cloud using Github Codespaces.
This requires a Github account. If you are signed in to Github, click here:
<https://codespaces.new/avigad/lamr>.

Make sure the Machine type is `4-core`, and then press `Create codespace`
(this might take a few minutes).
This creates a virtual machine in the cloud,
and installs Lean and Mathlib.

Opening any `.lean` file in the LAMR folder will start Lean.
You can update the repository by opening a terminal in the browser
and typing `git pull` followed by `lake exe cache get` and `lake build` as above.

Codespaces offers a certain number of free hours per month. When you are done working,
press `Ctrl/Cmd+Shift+P` on your keyboard, start typing `stop codespace`, and then
select `Codespaces: Stop Codespace` from the list of options.
If you forget, don't worry: the virtual machine will stop itself after a certain
amount of time of inactivity.

To restart a previous workspace, visit <https://github.com/codespaces>.

## Option 3: use this repository with Gitpod

Gitpod is an alternative to Github Codespaces, but is a little less convenient,
since it requires you to verify your phone number.
If you have a Gitpod account or are willing to sign up for one,
point your browser to
<https://gitpod.io/#/https://github.com/avigad/lamr>.
This creates a virtual machine in the cloud,
and installs Lean and Mathlib.
It then presents you with a VS Code window, running in a virtual
copy of the repository.
You can update the repository by opening a terminal in the browser
and typing `git pull` followed by `lake exe cache get` and `lake build` as above.

Gitpod gives you 50 free hours every month.
When you are done working, choose `Stop workspace` from the menu on the left.
The workspace should also stop automatically
30 minutes after the last interaction or 3 minutes after closing the tab.

To restart a previous workspace, go to <https://gitpod.io/workspaces/>.
If you change the filter from Active to All, you will see all your recent workspaces.
You can pin a workspace to keep it on the list of active ones.

## To use the automated reasoning tools

The `LAMR/bin` folder in the repository contains Linux binaries for CaDiCaL, Z3, CVC4, CVC5, and Vampire.
We provide procedures for calling them from Lean, and the `LAMR/Examples` folder has some examples.
If you are using the course with Gitpod or locally with Linux, the external tools will hopefully work
out of the box. If you are using OS/X or Windows, however, you will have to obtain or build the relevant
binaries on your own and replace the ones in `LAMR/bin`. You can find information on how to do that here:

- [CaDiCaL](https://github.com/arminbiere/cadical).
- [Z3](https://github.com/Z3Prover/z3)
- [CVC4](https://cvc4.github.io/)
- [CVC5](https://github.com/cvc5/cvc5)
- [Vampire](https://vprover.github.io/)

Building CaDiCaL for Windows seems difficult.
You do not need all three SMT solvers; any one of Z3, CVC4, or CVC5 will do.
