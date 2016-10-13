%Miguel Hernandez
%PHYS009H
%Matlab worksheet #2 (b)
% (b) Write a function that calculates the ?ux as a function of ?. Use di?erent 
% values of E and A to see how these quantities a?ect the ?ux. Do the plots 
% agree with your prediction? Describe how these quantities a?ect the ?eld.

function [ elecFlux ] = calcFlux( E, A, theta )
elecFlux = E * A .* cos(theta); %electric flux passing through a surface
return