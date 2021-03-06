type action =
  | Tick;
type state = {count: int};

[@react.component]
let make = (~prop1, ~prop2=?, ~prop3=1, ~children, ()) => {
  let children = React.Children.toArray(children);
  let (state, send) =
    ReactUpdateLegacy.useReducerWithMapState(
      () => {count: prop3},
      (action, state) =>
        switch (action) {
        | Tick => ReasonReact.Update({count: state.count + 1})
        },
    );

  <div>
    {state.count->Js.String.make->ReasonReact.string}
    <button onClick={_ => send(Tick)}> "ok"->ReasonReact.string </button>
    {switch (children) {
     | [|child|] => child
     | _ => ReasonReact.null
     }}
  </div>;
};
