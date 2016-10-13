%Miguel Hernandez
%PHYS009H
%Matlab worksheet #1 (b)
%Write a function to calculate the magnitude of the electric field of a
%line segment with charge density Q/L, as a function of the distance from
%the centre, along its axis
%E = kQ/(r*sqrt(r^2+(L/2)^2))
function [ magnE ] = elecFieldMagnLineSeg(Q, r, L)
k = 8.99*10^9; %coulomb's constant
magnE = (k*abs(Q)) ./ (r.*sqrt(r.^2 + (L/2)^2));
return