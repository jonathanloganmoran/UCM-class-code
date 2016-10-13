%Miguel Hernandez
%Number 1 (h)
%(h) In another ?gure, plot all the ?elds of the 
%    point charge, 
%    the disk, and the 
%    in?nite sheet, 
%in the same ?gure, in the form of |E| vs. distance (r) plots. 
%Use a range of distance that demonstrates the maximum possible variation of the field as a function of distance.

q = 8;                                              %Charge of a point in coulombs
Q = 50 * 10^-9;                                     %Charge of a line segment and disk in coulombs
L = 1.5;                                            %length of line segment in meters
R = 1;                                              %radius of a disk in meters
lambda = 9;                                         %linear charge density
ada = 9;                                            %charge density of the surface of a disk

r = 0:0.3:3;                                        %meters (x axis)

ptChargeEfield = elecFieldMagn(q, r);                   %electric field of a point charge
UniDiskEfield = elecFieldMagnUniDisk(q, r, R);          %electric field of a line segment
infinitePlaneEfield = elecFieldMagnInfPlane(ada);       %electric field of an infinite line

plot(r, ptChargeEfield, 'g-')
hold on
plot(r, UniDiskEfield, 'r-')
hold on
plot(r, infinitePlaneEfield, 'b*')
title('Electric Field for Sheets of Charge')
ylabel('|E|, N/C')
xlabel('z, m')
legend('Point Charge', 'Disk', 'Infinite Plane')

