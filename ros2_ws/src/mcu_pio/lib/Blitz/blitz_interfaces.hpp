enum PacketID : uint8_t {
    VELOCITY = 5,
    BNOREADING = 1,
};

#pragma pack(push, 1)
struct Velocity {
    float vx;
    float vy;
    float vw;
};  
#pragma pack(pop)

// Pwm struct for 4 motor PWM values
#pragma pack(push, 1)
struct Pwm {
    float m1;
    float m2;
    float m3;
    float m4;
};  
#pragma pack(pop)

#pragma pack(push, 1)
struct BnoReading{
    float current_angle;
    float refer_angle; 
};
#pragma pack(pop)


size_t get_packet_size(uint8_t id) {
    switch (id) {
        case VELOCITY:           return sizeof(Velocity);
        case BNOREADING:         return sizeof(BnoReading);
        default:                 return 0; // unknown
    }
}
