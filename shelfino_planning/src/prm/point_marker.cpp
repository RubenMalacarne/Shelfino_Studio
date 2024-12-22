#include "rclcpp/rclcpp.hpp"

#include "visualization_msgs/msg/marker.hpp"
#include <geometry_msgs/msg/polygon.hpp>
#include <geometry_msgs/msg/point.hpp>

using std::placeholders::_1;

using namespace std::chrono_literals;



class MiddlePoint : public rclcpp::Node // MODIFY NAME
{
public:
    MiddlePoint() : Node("middle_point_node") // MODIFY NAME
    {
       
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MiddlePoint>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
