%Miguel Hernandez
%PHYS009H
%Matlab worksheet #1 (c)
%(c) Write a function to calculate the magnitude of the electric ?eld of a 
% uniformly charged disk of radius R and charge density ?, 
% as a function of distance from its centre, along its axis.

function [magn] = elecFieldMagnUniDisk(Q, z, R)
Q_density = Q/(pi*R^2); % charge density of a disk
eps = (8.85*10^-12); % permittivity of free space constant
magn = (Q_density/(2*eps)) * (1-1./(sqrt(1+(R^2./z.^2))));
return

