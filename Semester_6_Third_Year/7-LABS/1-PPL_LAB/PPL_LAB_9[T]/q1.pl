% WAP to Print Number in interval 'l' to 'r'

% Base Case : When L == R
print_interval(L,L):-
    write(L),nl.

print_interval(L,R):-
    R>L,
    write(L),
    write(', '),
    L1 is L + 1,
    print_interval(L1,R).

print_interval(L,R):-
    L>R,
    write('Paramaters Needs to be Swapped!'),
    nl,
    print_interval(R,L).