%Miguel Hernandez
%Number 1 (g)
%For a set of values of your choice, plot all the felds of the 
%   point charge, 
%   the line segment and the
%   infinite line,
%in the same figure, in the form of 
%|E| vs. distance (r) plots. Use a range of distance that demonstrates the 
%maximum possible variation of the field as a function of distance. 
%(Hint: think of the values of the field very close to, and very far from the charge/charge distribution.)


q = 8;                                              %Charge of a point in coulombs
Q = 50 * 10^-9;                                     %Charge of a line segment and disk in coulombs
L = 1.5;                                            %length of line segment in meters
R = 1;                                              %radius of a disk in meters
lambda = 9;                                         %linear charge density
adaDisk = 9;                                        %charge density of the surface of a disk
adaInfPlane = 9;                                    %charge density of an infinite plane

r = 0:0.3:3;                                        %meters (x axis)

ptChargeEfield = elecFieldMagn(q, r);                   %electric field of a point charge
lineSegEfield = elecFieldMagnLineSeg(q, r, L);          %electric field of a line segment
infiniteLineEfield = elecFieldMagnInfLine(lambda, r);   %electric field of an infinite line

plot(r, ptChargeEfield, 'g-')
hold on
plot(r, lineSegEfield, 'r-')
hold on
plot(r, infiniteLineEfield, 'b-')









