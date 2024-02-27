
public class Device {
	
	private int power;
	
	public Device(int power) {
		this.power = power;
	}

	public int getPower() {
		return power;
	}
	
	@Override
	public boolean equals(Object obj) {
		
		if(!(obj instanceof Device)) return false; 

//        if(obj == this) return true;
        
        Device device = (Device) obj;
        
        return this.power == device.getPower() && obj == this;
		
	}
}
