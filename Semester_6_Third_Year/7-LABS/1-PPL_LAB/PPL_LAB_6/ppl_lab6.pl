main :-
    write('Enter the PPL Assignment No - '),
    nl,
    read(Number),
    printit(Number).

printit(Number):-
    write('You have Entered '),
    write(Number),
    write(' As Assignment Number!'),
    nl.
