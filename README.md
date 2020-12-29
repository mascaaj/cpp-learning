# cpp-learning
Going thru the motions of formal cpp learning

## Installation on Windows :
- Install mingw after downloading from link : https://sourceforge.net/projects/mingw-w64/
- Add to path, test install by opening terminal and using the command :
```
    g++ --version
```
- Install addons for vscode - ms-vscode.cpptools
- Build program using shortcut (Ctrl+Shift+X)

## Installation on Linux :
- Linux by default should have gcc compiler installed.
- Install vscode, install addons.
- At command line : 
```
c++ helloworld.cpp -o hello.out
```

## Workflow guide

- lowerCamelCase for variables containing multiple words.
- Branches should contain standard git flow keywords like feature, bug, hotfix. This will be ignored at current.
- Branches should have hyphen spacing. Intial few branches might not match this convention.
- Linux output files should be *.out files (for git ignore to pick them up)
- To view full git tree at cli use the following command or variations thereof:
```
git log --oneline --graph --color --all --decorate
```