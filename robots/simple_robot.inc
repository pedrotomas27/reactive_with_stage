define laser ranger(

    sensor(

        range [ 0.0 5.6 ]

        fov 240.0

        samples 240

    )

    color "blue"

    size [ 0.06 0.06 0.06 ]

    block( points 3

        point[0] [-0.1 0.0]
        
        point[1] [0.1 0]
        
        point[2] [0 0.2]
        
        z [0 0.2]

    )
    
    
)

define simple_robot position(

    odom_error [0.03 0.03 0.00 0.05]

    localization "odom"

    gui_nose 1

    drive "diff"

    color "yellow"

    laser(pose [ 0.23 0.0 -0.15 0.0 ])
    
    block(
        points 4
        point[0] [-0.01 -0.01]
        point[1] [-0.01 0.01]
        point[2] [0.01 0.01]
        point[3] [0.01 -0.01]
        z [0 0.02]
    )
    
    block(
        points 4
        point[0] [-0.015 0]
        point[1] [0 -0.015]
        point[2] [0.015 0]
        point[3] [0 0.015]
        z [0 0.005]
    )
    
    block(
        points 4
        point[0] [-0.01 -0.005]
        point[1] [-0.005 -0.01]
        point[2] [0.01 0.005]
        point[3] [0.005 0.01]
        z [0 0.005]
    )
    
    
)


