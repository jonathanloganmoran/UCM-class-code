%Miguel Hernandez
%PHYS009H
%Matlab worksheet 1 (a)
%Write a function to calculate the magnitude of the electric field of a
%point charge, q, as a function of the distance from the charge.
function [magn] = elecFieldMagn(q, r)
magn = (8.99*10^9*abs(q))./(r.^2);
return