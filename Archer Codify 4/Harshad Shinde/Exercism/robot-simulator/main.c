#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y) 
{
    robot_status_t robot;
    robot.direction = direction;
    robot.position.x = x;
    robot.position.y = y;
    return robot;
}

void robot_move(robot_status_t *robot, const char *action)
{
    for (const char *act = action; *act != '\0'; ++act)
    {
        switch (*act)
        {
            case 'R': 
                robot->direction = (robot->direction + 1) % 4;
                break;
            case 'L': 
                robot->direction = (robot->direction + 3) % 4;
                break;
            case 'A': 
                switch (robot->direction)
                {
                    case DIRECTION_NORTH:
                        robot->position.y += 1;
                        break;
                    case DIRECTION_EAST:
                        robot->position.x += 1;
                        break;
                    case DIRECTION_SOUTH:
                        robot->position.y -= 1;
                        break;
                    case DIRECTION_WEST:
                        robot->position.x -= 1;
                        break;
                    default:
                        break;
                }
                break;
            default: 
                break;
        }
    }
}
