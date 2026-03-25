#include <SI/all.h> 
#include "datasets/all.h"
using namespace SI;

int main() {
    mass m = 1_oz;
    velocity c = constant::speed_of_light;
    energy E = m * c * c;
    println("The potential energy of a single ounce is: ", E);


    print("2. What was Kelvin Kiptum's average speed in his Marathon world record? ");
    auto Marathon_distance = 42.195_km;
    auto Kelvins_time = 2_h + 35_s;
    auto avg_speed = Marathon_distance / Kelvins_time;
    println(avg_speed, " ", to_equivalent(avg_speed));


    print("3. What's the free fall time from Dubai's Burj Khalifa tower (828m)? ");
    length tower_height = 828_m;
    println(formula::time_of_free_fall(tower_height, constant::Earth_gravity));


    print("4. What's the kinetic energy of a mid-size SUV at 30MPH? ");
    auto SUV_mass = 5000_lb; 
    auto SUV_speed = 50_mph;
    println(formula::kinetic_energy(SUV_mass, SUV_speed));


    print("5. What's the fuel efficiency of a car driving 400 miles and consuming 15 US gallons? ");
    length distance_driven = 400_mi;
    volume fuel_consumed = 15_gal;
    println((fuel_consumed * 100_km) / distance_driven, "(per 100km)");


    print("6. What's the local gravity at Mount Everest's peak? ");
    auto Everest_latitude = 27.986065_deg;
    auto Everest_height   = 8848_m;
    println(formula::local_gravity(Everest_latitude, Everest_height));


    print("7. What's a car's braking distance on dry asphalt from 100km/h? ");
    auto braking_on_dry_asphalt = 8_m_per_s²;
    println(formula::braking_distance(100_km_per_h, 0_km_per_h, braking_on_dry_asphalt));


    print("8. What's a car's braking distance on wet asphalt from 100km/h? ");
    auto braking_on_wet_asphalt = 6_m_per_s²;
    println(formula::braking_distance(100_km_per_h, 0_km_per_h, braking_on_wet_asphalt));


    print("9. What's the wavelength of hydrogen (H2) in vacuum? ");
    auto H2_frequency = 1420.4057517682_MHz;
    auto H2_wavelength = formula::wavelength(constant::speed_of_light, H2_frequency);
    println(H2_wavelength);


    print("10. What's the frequency and wavelength of the high 'c' music note? ");
    auto high_c_frequency = 1046.5_Hz;
    auto wavelength = formula::wavelength(constant::speed_of_sound, high_c_frequency);
    println(high_c_frequency, wavelength);


    print("11. What's the population density on Earth (people per km² of land area)? ");
    dimensionless Earth_population = 8.2e9;
    auto Earth_land_area = 148'940'000_km²;
    auto density = Earth_population / Earth_land_area;
    println(density);


    print("12. How much land area would be available for each person on Earth? ");
    auto per_person = Earth_land_area / Earth_population;
    println(per_person);


    print("13. Which chemical elements melt above 2500K and are radioactive? ");
    for (auto& element : dataset::chemical_elements) {
        if (element.melting_point > 2500_K && element.radioactive)
            printf("%s at %s, ", element.name, to_string(element.melting_point).c_str());
    }
    println("");


    print("14. Which moons are greater than Earth's moon? ");
    for (auto& moon : dataset::moons) {
        if (moon.mean_radius > 1737.5_km)
            printf("%s's %s (ø=%s), ", moon.planet, moon.name, to_string(2. * moon.mean_radius).c_str());
    }
    println("");


    print("15. How long takes a 1TB download at 100MBit speed? ");
    auto file_size = 1_TB;
    auto download_speed = 100_Mbps;
    auto download_time = file_size / download_speed;
    println(download_time);


    print("16. What's an aircraft's glide path on final at 10NM distance in 3000ft height? ");
    auto distance_on_final = 10_nmi;
    auto height_on_final = 3000_ft;
    println(formula::glide_path(distance_on_final, height_on_final));


    print("17. What's the min speed required to escape from the Moon? ");
    auto escape_speed = formula::gravitational_escape_velocity(dataset::Moon.mass, dataset::Moon.mean_radius);
    println(escape_speed, to_equivalent(escape_speed));


    print("18. What's the windchill temperature of 5°C air temperature at 55km/h wind? ");
    auto air_temperature = 5_degC;
    auto wind_speed = 55_km_per_h;
    println(formula::windchill_temperature(air_temperature, wind_speed));


    print("19. What's the average speed to travel around the Earth in 80 days? ");
    auto travel_distance = dataset::Earth.equatorial_circumference;
    auto travel_time = 80_days;
    auto avg_travel_speed = travel_distance / travel_time;
    println(avg_travel_speed, to_equivalent(avg_travel_speed));


    print("20. What's Donald Trump's body-mass index (BMI)? ");
    mass Donalds_weight = 102_kg;
    length Donalds_height = 190_cm;
    println(formula::BMI(Donalds_weight, Donalds_height));


    print("21. What's the surface area and volume of a 30cm x 1cm pizza? ");
    auto pizza_radius = 30_cm / 2;
    auto pizza_height = 1_cm;
    auto pizza_area = formula::area_of_circle(pizza_radius);
    auto pizza_volume = formula::volume_of_cylinder(pizza_radius, pizza_height);
    println(pizza_area, pizza_volume);


    print("22. Which exoplanets are life-friendly and quite near? ");
    for (auto& exoplanet : dataset::exoplanets) {
        if (exoplanet.number_of_stars == 0)
            continue; // too cold without a star
        if (exoplanet.equilibrium_temperature < -40_degC || exoplanet.equilibrium_temperature > 40_degC)
            continue; // too cold or too hot
        if (exoplanet.eccentricity >= 0.02)
            continue; // orbit too elliptic or even parabolic 
        if (exoplanet.distance > 3_pc || exoplanet.distance == 0_m)
            continue; // too far away or distance unknown yet
        printf("'%s' in %s (%s), ", exoplanet.name, exoplanet.hostname, to_string(exoplanet.distance).c_str());
    }
    println("");


    print("23. What's the attractive force between Sun and Earth? ");
    auto Sun_mass = 1.988416E30_kg;
    auto Earth_mass = 5.9722E24_kg;
    auto distance_from_Earth_to_Sun = 149'597'870'691_m;
    println(formula::gravitational_attractive_force(Sun_mass, Earth_mass, distance_from_Earth_to_Sun));


    print("24. What's the attractive force between Earth and Moon? ");
    auto Moon_mass = 7.346E22_kg;
    auto distance_from_Earth_to_Moon = 384'399_km;
    println(formula::gravitational_attractive_force(Earth_mass, Moon_mass, distance_from_Earth_to_Moon));


    print("25. What's the filament length of a 750g PLA roll with 2.85mm diameter? ");
    auto filament_weight = 750_g;
    auto filament_diameter = 2.85_mm;
    auto density_of_PLA = 1.24_g_per_cm³;
    auto filament_volume = filament_weight / density_of_PLA;
    auto filament_length = filament_volume / (constant::pi * square(filament_diameter / 2.0));
    println(filament_length);


    print("26. How long takes a flight non-stop around the Earth at Mach 1? ");
    auto flight_distance = dataset::Earth.equatorial_circumference;
    println(flight_distance / 1_Mach);


    print("27. What's the surface area and volume of a soccer ball? ");
    auto ball_circumference = 70_cm; // (69-71cm for FIFA ball size 5)
    auto ball_radius = formula::radius_of_circumference(ball_circumference);
    auto ball_area = formula::area_of_sphere(ball_radius);
    auto ball_volume = formula::volume_of_sphere(ball_radius);
    println(ball_area, ball_volume);


    print("28. What's the travel time of sun light to Earth? ");
    println(distance_from_Earth_to_Sun / constant::speed_of_light);


    print("29. What's the lift force of an A380 wing at sea level with 284km/h rotation speed? ");
    auto wing_surface = 845_m²;
    dimensionless lift_coefficient = 1.3939;
    auto air_density = 1.2250_kg_per_m³; // at sea level at 15°C (59°F)
    auto air_speed = 284_km_per_h;
    println(formula::lift_force_of_wing(lift_coefficient, wing_surface, air_density, air_speed));


    print("30. What's the impact energy of a 50m asteroid at 50,000km/h? ");
    auto asteroid_diameter = 50_m;
    auto asteroid_density = 2500_kg_per_m³; // mostly estimated only 
    auto asteroid_speed = 50'000_km_per_h; // range is usually 50,000..100.000km/h
    auto calculated_volume = formula::volume_of_sphere(asteroid_diameter / 2.0);
    auto calculated_mass = calculated_volume * asteroid_density;
    auto impact_energy = formula::kinetic_energy(calculated_mass, asteroid_speed);
    println(impact_energy, to_equivalent(impact_energy));


    print("31. What's the sound intensity of a 1W loudspeaker in 1m distance? ");
    auto speaker_power = 1_W;
    auto distance_to_speaker = 1_m;
    auto intensity = formula::sound_intensity(speaker_power, distance_to_speaker);
    println(intensity, to_equivalent(intensity));


    print("32. What's the max diving time in salt water in 10m depth using a 10l bottle? ");
    auto average_breathing = 20_l_per_min;
    auto bottle_volume = 10_l;
    auto bottle_pressure = 150_bar;
    auto dive_depth = 10_m;
    auto salt_water_density = 1033.23_kg_per_m³;
    auto air_pressure = 1013.25_hPa;
    auto water_pressure = salt_water_density * constant::g_n * dive_depth + air_pressure;
    auto max_time = (bottle_volume * bottle_pressure) / (average_breathing * water_pressure);
    println(max_time);


    print("33. What's the sum of 1m + 1nmi + 1ft + 1in? ");
    auto length_sum = 1_m + 1_nmi + 1_ft + 1_in;
    println(length_sum);


    print("34. What's the sum of 1 byte + 1kB + 1GB...(and so on)? ");
    auto byte_sum = 1_byte + 1_kB + 1_MB + 1_GB + 1_TB + 1_PB + 1_EB + 1_ZB + 1_YB + 1_RB + 1_QB;
    println(byte_sum);


    print("35. What's the speed sum here? ");
    auto speed_sum = 278_m_per_s + 1000_km_per_h + 540_kn + 621_mph + 0.85_Mach;
    println(speed_sum);


    print("36. What's a radar's geometrical horizon (the distance it can see)? ");
    auto Earth_radius = 6371.009_km;
    auto Radar_station_height = 30_ft;
    auto distance = sqrt((Earth_radius + Radar_station_height) * (Earth_radius + Radar_station_height) - Earth_radius * Earth_radius);
    println(distance);


    print("37. What's the distance the Earth has travelled so far? ");
    auto distance_Earth_to_Sun = constant::AU;
    auto distance_per_year = formula::circumference_of_circle(distance_Earth_to_Sun);
    auto Earth_year = 365.25_days;
    auto Earth_age = Earth_year * 4.5e12;
    auto distance_total = distance_per_year * (Earth_age / Earth_year);
    println(distance_total);


    print("38. What are the details of a 10m x 1m oak timber log? ");
    auto log_length = 10_m;
    auto log_diameter = 1_m;
    auto dry_oak_weight = 710_kg_per_m³; 
    auto dry_oak_power = 4.2_kWh_per_kg;
    auto area = formula::area_of_cylinder(log_diameter / 2, log_length);
    auto volume = formula::volume_of_cylinder(log_diameter / 2, log_length);
    auto weight = volume * dry_oak_weight;
    auto power = weight * dry_oak_power;
    println(area, volume, weight, power);


    print("39. What's the min cable wire size for 100m copper, 230V, 30A max? ");
    auto conductor_resistivity = 1.7241e-8_Ohm_m; // for copper
    auto cable_length = 100_m;
    auto max_current = 30_A;
    auto allowable_voltage_drop = 10_V; 
    auto A = (2.0 * conductor_resistivity * cable_length * max_current) / allowable_voltage_drop;
    println(A);


    print("40. What's the voltage of a capacitor (5V, 0.47µF, 4.7KOhm) after 10ms? ");
    auto CC = 0.47_uF;
    auto V0 = 5_V;
    auto RR = 4.7_kOhm;
    auto time = 10_ms;
    auto V1 = V0 * exp(-time / (RR * CC));
    println(V1);


    print("41. What's the ballistic max height/range/flight time of a bullet fired 45° on Moon's surface? ");
    auto muzzle_velocity = 1000_m_per_s;
    auto altitude = 0_m;
    auto launch_angle = 45_deg;
    auto max_height = formula::ballistic_max_height(muzzle_velocity, altitude, launch_angle, dataset::Moon.surface_gravity);
    auto max_range = formula::ballistic_max_range(muzzle_velocity, altitude, launch_angle, dataset::Moon.surface_gravity);
    auto flight_time = formula::ballistic_travel_time(muzzle_velocity, altitude, launch_angle, dataset::Moon.surface_gravity);
    println(max_height, max_range, flight_time);


    print("42. What are the frequencies and wavelengths of all musical notes? ");
    for (auto& note : dataset::musical_notes)
    {
        auto wavelength = formula::wavelength(constant::speed_of_sound, note.frequency);
        printf("%s%d=%s/%s ", note.name, note.octave, to_string(note.frequency).c_str(), to_string(wavelength).c_str());
    }
    println("");


    print("43. What's the power of a 15PS motorcycle with 200kg weight? ");
    auto motor_power = 15_PS;
    auto total_mass = 200_kg;
    auto power_to_weight_ratio = total_mass / motor_power;
    println(motor_power, " ", power_to_weight_ratio);

 
    // Conversion example:
    double x = 42;        // <- x contains a dimensionless number without unit
    SI::time t = x * 1_s; // <- t is now 42 seconds
    double y = t / 1_s;   // <- y again contains a dimensionless number (no unit)
    // NOTE: This doesn't work for celsius and fahrenheit due to the offset!


    print("\nHINT: In case of gibberish characters use a modern terminal with Unicode support!");
    return 0;
}
