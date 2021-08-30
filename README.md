# Logic and Mechanized Reasoning

This repository is designed to accompany the course by the same name. The textbook is available at
[https://avigad.github.io/lamr](https://avigad.github.io/lamr). The repository contains a supporting library
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

4. The folder `User/Examples` contains a copy all the examples from the textbook. Feel free to
edit these files and experiment. You can also create new files to your heart's content.
You should not change anything in the `Mathlib` or `LAMR` directories; we recommend keeping all
your own files in the `User` folder. There is an original copy of the `Examples` folder in the
`LAMR` directory, so you can copy these to `User/Examples` if you wish to restore the original
files.

5. When you are done, choose `Stop workspace` from the menu on the left. The workspace should also
stop automatically 30 minutes after the last interaction or 3 minutes after closing the tab.

Every time you return to the link in Step 2, Gitpod will start a fresh workspace. To restart a
previous workspace, go to [https://gitpod.io/workspaces/](https://gitpod.io/workspaces/).
If you change the filter from `Active` to `All`, you will see all your recent workspaces.
You can pin a workspace to keep it on the list of active ones.

With this method, you can save files on a virtual machine and start and stop it at will.
There isn't an easy way to transfer files from the virtual machine to your own computer,
but you can simply copy text from the editor in the browser and paste it anywhere you want.

We will update the repository, including the examples folder, as the course proceeds. To update the
copy of the repository on an existing virtual machine, type `git pull --no-rebase`
in the terminal window. You will then have to manually copy new files from the `LAMR/Examples`
folder to the `User/Examples` folder. Alternatively, you can simply follow the instructions
above to start a new workspace.


## Option 2: Use Gitpod and a forked repository

Git is a powerful version control system and [Github](https://github.com/) allows you to share
repositories in the cloud. If you are familiar with these or willing to
[learn](https://guides.github.com/) how to use them, you can fork this repository to your
github account and use the fork as a file system for the virtual machine.

1. Create a fork of [https://avigad.github.io/lamr/](https://avigad.github.io/lamr/) by clicking
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

3. Inside the top folder of the repository, type `leanpkg build` to compile the library files.
Also, copy the examples folder from the `LAMR` folder to the `User` folder.

4. Open the repository folder in VS Code.

From there, you should be able to use Lean and experiment with the example files as described in
Option 1.

To use CaDiCaL, Z3, and Vampire, you will have to add them to manually to the folder `LAMR/bin`.
There are instructions on how to obtain CaDiCaL [here](https://github.com/arminbiere/cadical).
We will later provide instructions for obtaining Z3 and Vampire.

















