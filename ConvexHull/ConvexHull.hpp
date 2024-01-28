# ifndef MRL_VISION_MODULE_CONVEX_HULL
    /**
     * @file ConvexHull.hpp
     * @brief Convex Hull Header File
     * @date 2024-01-28
     */
    # define MRL_VISION_MODULE_CONVEX_HULL
    //-- Include Configurations
    # ifndef CONVEX_HULL_CONFIGS
        # include "Configs.hpp"
    # endif // CONVEX_HULL_CONFIGS
    /**
     * @brief Points Class Definition
     */
    class Points {
        public:
            /**
             * @brief Points Constructor
             */
            Points();
            /**
             * @brief X-Axis Coordinate
             */
            int x;
            /**
             * @brief Y-Axis Coordinate
             */
            int y;
            /**
             * @brief Angle of the Point
             */
            double theta;
    };
# endif // MRL_VISION_MODULE_CONVEX_HULL