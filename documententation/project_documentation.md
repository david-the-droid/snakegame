# Project Documentation

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#project-configuration-in-visual-studio-code">Project Configuration in Visual Studio Code</a>
      <ul>
        <li><a href="#building-multiple-files">Building multiple files</a></li>
        <li><a href="#building-multiple-files-in-sub-directories">Building multiple files in sub-directories</a></li>
      </ul>
    </li>
  </ol>
</details>

<!-- CONTENTS -->

## Project Configuration in Visual Studio Code

### Building multiple files

* By default Visual Studio Code is setup to build only one file. Ideally users want to be able to build multiple files so implementations can be well structured.
  + To enable VSC to do this, navigate to ".vscode" -> tasks.json
  + And follow the steps at this [link](https://code.visualstudio.com/docs/cpp/config-mingw#_modifying-tasksjson) under the "Modify tasks.json"
  + Rebuild the project

### Building multiple files in sub-directories

* By default Visual Studio Code is setup to build only one file. Ideally users want to be able to build multiple files so implementations can be well structured.
* To enable VSC to do this, navigate to ".vscode" -> tasks.json
* Example sub directory structure:
      ├── src/
         main.cpp
         ├── game_engine/
             └── game_engine.cpp
             └── game_engine.h

* Add the following configuration to both "cppbuild" under the args where the file is currently referenced:

![image](https://github.com/david-the-droid/snakegame/assets/54676795/9fa8fbbd-a6c0-48ef-98e5-f9e13ac5d7ca)
