%Miguel Hernandez
%PHYS009H
%Matlab worksheet #1 (d)
% (d) Write a function to calculate the magnitude of the electric ?eld of an 
% in?nite plane with a uniform charge density, ?, as a function of the 
% perpendicular distance from the surface.


function [ magn ] = elecFieldMagnInfPlane(ada)
% ada is the charge density of the plane
eps = 8.85*10^-12; %permittivity constant
magn = ada./(2*eps); % elec field of an infinite plane
return