%Miguel Hernandez
%Number 2 (c)
%(c) For four di?erent set of values of your choice, 
%plot flux as a function of f, in the same figure.
%Express all quantities in SI units. Make sure to add proper legends, 
%axis labels, titles and also to specify the values of q, Q, L, R, , ada and ?' you used.

%Electric fields 1 through 4 in N/C
E1 = 10;
E2 = 7;
E3 = 4;
E4 = 15;

%Areas for electric fields 1 through 4 in m^2
A1 = 4;
A2 = 3;
A3 = 12;
A4 = 7;

theta = 0:pi/6:2*pi;                            %angle in radians (x-axis)

curve1 = calcFlux(E1, A1, theta);                   %electric flux of E1
curve2 = calcFlux(E2, A2, theta);                   %electric flux of E2
curve3 = calcFlux(E3, A3, theta);                   %electric flux of E3
curve4 = calcFlux(E4, A4, theta);                   %electric flux of E4

plot(theta, curve1, 'r-')
hold on
plot(theta, curve2, 'g-')
hold on
plot(theta, curve3, 'b-')
hold on
plot(theta, curve4, 'p-')


