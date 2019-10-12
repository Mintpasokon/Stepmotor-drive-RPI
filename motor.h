#ifndef MOTOR_H
#define MOTOR_H


class motor
{
public:
    motor();

    void motorAssign();
    void rotate(int, int);

private:
    int** pins;
    int stepsPerCircle = 360;
};

#endif // MOTOR_H
