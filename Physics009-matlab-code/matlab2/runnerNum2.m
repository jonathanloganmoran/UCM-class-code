%Miguel Hernandez
%PHYS 009H
%2. Using the function you wrote in (1), 
%?nd the integral of the function y(x) = 6, between x0 = 0 and xn = 10. 
%Use four di?erent ?x and report the results for all four, 
%so that you can see how the choice of ?x a?ects the value of 
%the integral. Use MATLAB’s trapz function to compute the same integrals 
%and compare the values you get.

dx1 = 2;
dx2 = 1;
dx3 = .5;
dx4 = .25;

x1 = 0:dx1:10;
y1 = [6 6 6 6 6 6];

x2 = 0:dx2:10;
y2 = [6 6 6 6 6 6 6 6 6 6 6];

x3 = 0:dx3:10;
y3 = [6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6];

x4 = 0:dx4:10;
y4 = [6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6];

area1 = trapezoidIntegral(x1, y1)
trap1 = trapz(x1, y1)

area2 = trapezoidIntegral(x2, y2)
trap2 = trapz(x2, y2)

area3 = trapezoidIntegral(x3, y3)
trap3 = trapz(x3, y3)

area4 = trapezoidIntegral(x4, y4)
trap4 = trapz(x4, y4)

