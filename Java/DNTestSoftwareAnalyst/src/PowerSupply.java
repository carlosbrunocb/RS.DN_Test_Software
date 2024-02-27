import java.util.ArrayList;

public class PowerSupply {
	
	private int powerCapacity;
	private ArrayList<Device> devices = new ArrayList<Device>();

	public PowerSupply(int powerCapacity) {
		this.powerCapacity = powerCapacity;
	}
	
	public boolean addDevice(Device device) {
		
		if(device.getPower() <= powerCapacity) {
			devices.add(device);
			powerCapacity -= device.getPower();
			return true;
		}
		return false;
	}
	
	public void removeDevice(Device device) {
		
		for (int i = 0; i < devices.size(); i++) {			
			if(devices.get(i).equals(device)) {
				powerCapacity += devices.get(i).getPower();
				devices.remove(i);
				break;
			}
		}
	}
}
