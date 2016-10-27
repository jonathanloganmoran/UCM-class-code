%Miguel Hernandez
%Physics 009H
%Matlab WS Integration
%1. Write a MATLAB function that calculates the de?nite 
%integral of a function y(x) between limits x0 and xn 
%(Hint: One option would be to input x and y(x)).

function [ area ] = trapezoidIntegral(x, y)
    %length of base of one trapezoid
    deltaX = (x(2)-x(1));
    %sum of edge heights
    sumEdgeHeights = (y(1) + y(length(y)));
    %sum of inner heights
    if length(y) == 1
	sumInnerHeights = ((length(x)-1) * y) - sumEdgeHeights;
    else 
	sumInnerHeights = (sum(y) - sumEdgeHeights);
    end
    %area of curve using trapezoids
    area = deltaX/2 * (sumEdgeHeights + 2*sumInnerHeights);
return
