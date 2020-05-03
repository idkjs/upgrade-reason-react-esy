let projectDir = GetProjectRoot.get();

include Rely.Make({
  let config =
    Rely.TestFrameworkConfig.initialize({
      snapshotDir:
        projectDir
        |> (dir => Filename.concat(dir, "test"))
        |> (dir => Filename.concat(dir, "__snapshots__")),
      projectDir,
    });
});