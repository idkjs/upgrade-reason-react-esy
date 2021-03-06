# Upgrade Reason React

[![Build Status](https://dev.azure.com/mlbli/Upgrade%20ReasonReact/_apis/build/status/bloodyowl.upgrade-reason-react-esy?branchName=master)](https://dev.azure.com/mlbli/Upgrade%20ReasonReact/_build/latest?definitionId=4&branchName=master)

Upgrade your ReasonReact codebase to 0.7.0 (the release with hooks).

## Installation

```console
$ yarn add bloodyowl-upgrade-reason-react
```

## Usage

Run the script

```console
$ find src -name "*.re" | yarn Upgrade
$ # or on windows
$ find src -name "*.re" | yarn Upgrade.exe
```

If you've alias `ReasonReact` to `React`, search and replace it back to `ReasonReact`.

Search and replace:

- `ReasonReact.Update` to `Update`
- `ReasonReact.UpdateWithSideEffects` to `UpdateWithSideEffects`
- `ReasonReact.SideEffects` to `SideEffects`
- `ReasonReact.NoUpdate` to `NoUpdate`

Install `reason-react` from this fork's [master branch](https://github.com/bloodyowl/reason-react)

Install those:

```
$ yarn add reason-react-update
$ yarn add reason-react-compat
```

Change JSX version in `bsconfig.json`

```diff
 "reason": {
-  "react-jsx": 2
+  "react-jsx": 3
 },
```

Update places where you use DOM refs (whether use `React.createRef` or `React.useRef` above your components).

Please do check places where you use `handle` code, this might break.

**This script isn't magic**: some heuristics I use are from personal experience and don't match any codebase. That said, it should do the heavy lifting and let you with details that would be hard to solve with an AST transformation. Let the compiler guide you once you ran the script.
