[@bs.module] external myBanner : ReasonReact.reactClass = "../../../src/Banner.js";

let make = (~show, ~message, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=myBanner,
    ~props={
      "show": Js.Boolean.to_js_boolean(show), 
      "message": message
    },
    children
  );
