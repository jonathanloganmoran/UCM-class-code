%Miguel Hernandez
%Physics 009 Honors
%Extra work
%For questions 1, 2 and 3, choose 10 to 15 di?erent values of x_n and plot the 
%value of the integral obtained as a function of x_n, in the same plot, using 
%three di?erent subplots. Compare these values with the actual values of the integrals 
%you will have to ?nd the values using your knowledge of calculus).
%Plot these values as a function of x_n, on the respective subplots.

%using x_n up to 15
%**NUMBER 2 ON WORKSHEET**
dx = 0.0001;
n = 1:1:15;
y = 6;

areaVector1 = [];

for x_n = 1:15
    area = trapezoidIntegral(0:dx:x_n, y); %calculates the area with different values of x_n
    areaVector1 = [areaVector1 area]; %appends result from above into a vector
end

plot(n, areaVector1, 'g-')
hold on
%**END NUMBER 2 ON WORKSHEET GRAPH**

%**NUMBER 3 ON WORKSHEET**
y = 4 .* x;

areaVector2 = [];

for x_n = 1:15
    area = trapezoidIntegral(0:dx:x_n, 4 .* (0:dx:x_n));
    areaVector2 = [areaVector2 area];
end

plot(n, areaVector2, 'b-')
hold on

%**END NUMBER 3 ON WORKSHEET GRAPH**

title('Testing different values of x_n')
xlabel('n')
ylabel('Area')
legend('Number 2', 'Number 3')











