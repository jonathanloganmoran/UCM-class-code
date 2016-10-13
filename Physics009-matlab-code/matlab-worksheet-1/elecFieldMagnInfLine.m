%Miguel Hernandez
%PHYS009H
%Matlab worksheet #1 (e)
% (e) Write a function to calculate the magnitude of the
% electric ?eld of an in?nite line with charge density ?, as a 
% function of the distance from the centre, along its axis.

function [ magn ] = elecFieldMagnInfLine( lambda, r )
eps = 8.85*10^-12; %permittivity constant
magn = abs(lambda) ./ (2*pi*eps.*r);
return