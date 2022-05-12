

double rd = arctan(sqrt(x^2 + y^2)) * (1 + a * arctan(sqrt(x^2 + y^2))^2 + b * arctan(sqrt(x^2 + y^2))^4 + c * arctan(sqrt(x^2 + y^2))^2 *arctan(sqrt(x^2 + y^2))^4 + d * arctan(sqrt(x^2 + y^2))^4 * arctan(sqrt(x^2 + y^2))^4)
double txp = rd / sqrt(r2) * xp + 2. * p1 * xyp + p2 * (r2 + 2. * xp2);
       txp = rd / sqrt(x^2 + y^2)*x+2dxy+e((x^2+y^2)+2x^2)
double typ = rd / sqrt(r2) * yp + p1 * (r2 + 2. * yp2) + 2. * p2 * xyp;
       typ = rd / sqrt(x^2 + y^2)*y+2exy +d((x^2 + y^2)+2y^2)

theta = arctan(sqrt(x^2 + y^2))



arctan(sqrt(x^2 + y^2)) * (1 + a * arctan(sqrt(x^2 + y^2))^2 + b * arctan(sqrt(x^2 + y^2))^4 + c * arctan(sqrt(x^2 + y^2))^2 *arctan(sqrt(x^2 + y^2))^4 + d * arctan(sqrt(x^2 + y^2))^4 * arctan(sqrt(x^2 + y^2))^4)/sqrt(x^2 + y^2)*x+2dxy+e((x^2+y^2)+2x^2)

arctan(sqrt(x^2 + y^2)) * (1 + a * arctan(sqrt(x^2 + y^2))^2 + b * arctan(sqrt(x^2 + y^2))^4 + c * arctan(sqrt(x^2 + y^2))^2 *arctan(sqrt(x^2 + y^2))^4 + d * arctan(sqrt(x^2 + y^2))^4 * arctan(sqrt(x^2 + y^2))^4)/sqrt(x^2 + y^2)*y+2exy +d((x^2 + y^2)+2y^2)


dtxp_dxp =(( xp2 * (p1 *theta8 + k3 * theta6 +k2*theta4+k1*theta2+1) + x *theta *(8. * p1*xp *theta7  +6. * k3 *xp *theta5+ 4. *k2*xp *theta3 + 2. * k1 *xp *theta)+(6. * p2 *xp +2. * p1*yp)*r2*(r2+1))/r2*(r2+1)) +
            (theta * (p1*theta8 + k3 * theta6 +k2*theta4 +k1*theta2 +1)/sqrt(r2)) -
            xp2 * theta * (p1 * theta8 + k3 * theta6 + k2*theta4 +k1*theta2 + 1)/pow(r2,3/2);


dtyp_dyp = (yp * xp *(p1 * theta8 + k3 * theta6 +k2*theta4 +k1*theta2 +1.)+ yp* theta * (8.*p1*theta7 +6. * k3 * xp * theta5 + 4. *k2*xp * theta3 + 2. * k1 * theta)+(2.*p1*xp + 2. * p2 * yp)*(r2)*(r2+1))/r2*(r2+1)) -
            (yp * xp *(p1 * theta8 + k3 * theta6 +k2*theta4 +k1*theta2 +1.))/pow(r2,3/2);