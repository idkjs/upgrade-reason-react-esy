open TestFramework;

let transform = Lib.Migrate.transform([|"--demo"|]);

let root = GetProjectRoot.get();

describe("should transform correctly", ({test,_}) => {
  test("App", ({expect,_}) => {
    transform(root ++ "/test/cases/App.re");
    expect.file(root ++ "/output/test/cases/App.re").toMatchSnapshot();
  });
  test("MultiModules", ({expect,_}) => {
    transform(root ++ "/test/cases/MultiModules.re");
    expect.file(root ++ "/output/test/cases/MultiModules.re").toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/MultiModules.rei").toMatchSnapshot();
  });
  test("ReducerComponent", ({expect,_}) => {
    transform(root ++ "/test/cases/ReducerComponent.re");
    expect.file(root ++ "/output/test/cases/ReducerComponent.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/ReducerComponent.rei").
      toMatchSnapshot();
  });
  test("ReducerComponentWithDidMount", ({expect,_}) => {
    transform(root ++ "/test/cases/ReducerComponentWithDidMount.re");
    expect.file(root ++ "/output/test/cases/ReducerComponentWithDidMount.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/ReducerComponentWithDidMount.rei").
      toMatchSnapshot();
  });
  test("ReducerComponentWithChildren", ({expect,_}) => {
    transform(root ++ "/test/cases/ReducerComponentWithChildren.re");
    expect.file(root ++ "/output/test/cases/ReducerComponentWithChildren.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/ReducerComponentWithChildren.rei").
      toMatchSnapshot();
  });
  test("ReducerComponentWithNamedChildren", ({expect,_}) => {
    transform(root ++ "/test/cases/ReducerComponentWithNamedChildren.re");
    expect.file(
      root ++ "/output/test/cases/ReducerComponentWithNamedChildren.re",
    ).
      toMatchSnapshot();
    expect.file(
      root ++ "/output/test/cases/ReducerComponentWithNamedChildren.rei",
    ).
      toMatchSnapshot();
  });
  test("StatelessComponent", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponent.re");
    expect.file(root ++ "/output/test/cases/StatelessComponent.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/StatelessComponent.rei").
      toMatchSnapshot();
  });
  test("StatelessComponentWithMultilineDidMount", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponentWithMultilineDidMount.re");
    expect.file(root ++ "/output/test/cases/StatelessComponentWithMultilineDidMount.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/StatelessComponentWithMultilineDidMount.rei").
      toMatchSnapshot();
  });
  test("StatelessComponentWithRenderOnly", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponentWithRenderOnly.re");
    expect.file(root ++ "/output/test/cases/StatelessComponentWithRenderOnly.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/StatelessComponentWithRenderOnly.rei").
      toMatchSnapshot();
  });
  test("StatelessComponentWithRenderOnlyButReadsSelf", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponentWithRenderOnlyButReadsSelf.re");
    expect.file(root ++ "/output/test/cases/StatelessComponentWithRenderOnlyButReadsSelf.re").
      toMatchSnapshot();
    expect.file(root ++ "/output/test/cases/StatelessComponentWithRenderOnlyButReadsSelf.rei").
      toMatchSnapshot();
  });
  test("StatelessComponentWithChildren", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponentWithChildren.re");
    expect.file(
      root ++ "/output/test/cases/StatelessComponentWithChildren.re",
    ).
      toMatchSnapshot();
    expect.file(
      root ++ "/output/test/cases/StatelessComponentWithChildren.rei",
    ).
      toMatchSnapshot();
  });
  test("StatelessComponentWithoutLifecycle", ({expect,_}) => {
    transform(root ++ "/test/cases/StatelessComponentWithoutLifecycle.re");
    expect.file(
      root ++ "/output/test/cases/StatelessComponentWithoutLifecycle.re",
    ).
      toMatchSnapshot();
    expect.file(
      root ++ "/output/test/cases/StatelessComponentWithoutLifecycle.rei",
    ).
      toMatchSnapshot();
  });
  test("StatelessComponentWithoutLifecycleWithChildren.re", ({expect,_}) => {
    transform(
      root ++ "/test/cases/StatelessComponentWithoutLifecycleWithChildren",
    );
    expect.file(
      root
      ++ "/output/test/cases/StatelessComponentWithoutLifecycleWithChildren.re",
    ).
      toMatchSnapshot();
    expect.file(
      root
      ++ "/output/test/cases/StatelessComponentWithoutLifecycleWithChildren.rei",
    ).
      toMatchSnapshot();
  });
});
