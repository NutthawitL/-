const float G = 9.80665;

float potential_cal(float m,float h){
	return m* h* G;
}
float kenetic_cal(float m,float v){
	return (m * v * v) / 2;
}
float metric_cal(float w,float h){
	return w / (h * h);
}
float imperial_cal(float w,float h){
	return (w / (h * h)) * 703;
}
float watt_cal(float p,float t){
	return p * t;
}
float malembr(float mw,float mh, float ma){
	return 66 + (13.7 * mw) + (5 * mh) - (4.7 * ma);
}
float femalembr(float mw,float mh, float ma){
	return 665 + (9.6 * mw) + (1.8 * mh) - (4.7 * ma);
}
float consumption_cal(float w){
float base;
	

	if(w >= 16 && w <= 25 ){
		base = 35.232 + (w - 16)*2.9882;
		
	}else if(w >= 26 && w <= 35 ){
		base = 35.232 + 29.882 + (w-26*3.2405);
		
	}else if(w >= 36 && w <= 100 ){
		base = 35.232 + 29.882 + 32.405 + (w-36)*3.6237;
		
	}else if(w >= 101 && w <= 150 ){
		base = 35.232 + 29.882 + 32.405 + 235.5405 + (w-101)*3.7171;
		
	}else if(w >= 151 && w <= 400 ){
		base = 35.232 + 29.882 + 32.405 + 235.5405 + 185.855 + (w-151)*4.2218;
		
	}else if(w >= 400){
		base = 35.232 + 29.882 + 32.405 + 235.5405 + 185.855 + 1,055.45 + (w-400)*4.4217;
		
	}else{
		base = w * 2.3488;
	}
	
	
	
	
	
	
	
	
	return base; 
}
float tax_cal(float t) {
    float taxo;

    if (t >= 0 && t <= 150000) {
        taxo = 0;
    } else if (t <= 300000) {
        taxo = (t - 150000) * 0.05;
    } else if (t <= 500000) {
        taxo = (150000 * 0.05) + (t - 300000) * 0.1;
    } else if (t <= 750000) {
        taxo = (150000 * 0.05) + (200000 * 0.1) + (t - 500000) * 0.15;
    } else if (t <= 1000000) {
        taxo = (150000 * 0.05) + (200000 * 0.1) + (250000 * 0.15) + (t - 750000) * 0.2;
    } else if (t <= 2000000) {
        taxo = (150000 * 0.05) + (200000 * 0.1) + (250000 * 0.15) + (250000 * 0.2) + (t - 1000000) * 0.25;
    } else {
        taxo = (150000 * 0.05) + (200000 * 0.1) + (250000 * 0.15) + (250000 * 0.2) + (1000000 * 0.25) + (t - 2000000) * 0.3;
    }

    return taxo;
}





