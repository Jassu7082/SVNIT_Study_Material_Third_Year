% Monkey-Banana Problem {[U19CS012] BHAGYA RANA}

% initial state: Monkey is at door,
%                Monkey is on floor,
%                Box is at window,
%                Monkey doesn't have banana.

% state(Monkey location in the room, Monkey onbox/onfloor, box location, has/hasnot banana)


% Legal Actions Moves

% grab banana
do( state(middle, onbox, middle, hasnot),
    grab,
    state(middle, onbox, middle, has) ).

% climb box
do( state(L, onfloor, L, Banana),
    climb,
    state(L, onbox, L, Banana) ).

% push box from L1 to L2
do( state(L1, onfloor, L1, Banana),
    push(L1, L2),
    state(L2, onfloor, L2, Banana) ).

% walk from L1 to L2
do( state(L1, onfloor, Box, Banana),
    walk(L1, L2),
    state(L2, onfloor, Box, Banana) ).

% canget(State): monkey can get banana in State

% Monkey already has it, goal state
canget(state(_, _, _, has)).

canget(State1):-                     % not goal state, do some work to get it
      do(State1, Action, State2),    % do something (grab, climb, push, walk)
      canget(State2).                % canget from State2

% get plan = list of actions

canget(state(_, _, _, has), []).     % Monkey already has it, goal state

canget(State1, Plan) :-                % not goal state, do some work to get it
      do(State1, Action, State2),      % do something (grab, climb, push, walk)
      canget(State2, PartialPlan),     % canget from State2
      add(Action, PartialPlan, Plan).  % add action to Plan

add(X,L,[X|L]).

% <-------------------OutPut Query------------------------>

% ?- canget(state(atdoor, onfloor, atwindow, hasnot), Plan).
% Plan = [walk(atdoor, atwindow), push(atwindow, middle), climb, grasp]
% Yes

% ?- canget(state(atwindow, onbox, atwindow, hasnot), Plan ).
% No
