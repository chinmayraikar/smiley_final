void timer_cb(){

    

    // send_data(pack_data<sensors>(sensor_val, SENSORS));
    // send_data(pack_data<limit_switches>(ls_val, LIMIT_SWITCHES));
    //send_data(pack_data<odom>(odom_val, ODOM));
    //send_data(pack_data<sensors>(sensors_val, SENSORS));
    // send_data(pack_data<finvelocity>(finvelocity_val, FINVELOCITY));
    // send_data(pack_data<finstate>(finstate_val, FINSTATE));
    // send_data(pack_data<heightvelocity>(heightvelocity_val, HEIGHTVELOCITY));
    // send_data(pack_data<ir>(ir_val, IR));
    send_data(pack_data<BnoReading>(bnoreading, BNOREADING));
    // send_data(pack_data<Encoders>(encoder, ENCODERS));




    // std::string data = "";

    // uint8_t num = 3;
    // float num2 = 4.567;
    
    // data = "data sending " + std::to_string(num) + " " + std::to_string(num2);
    // debug_state(data);
    
}

BlitzTimer t1(timer_cb, 100);
