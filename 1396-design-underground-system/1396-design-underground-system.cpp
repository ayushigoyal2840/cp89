class UndergroundSystem {
public:
    // map<int,pair<string,int>>mp;
    unordered_map<string, pair<long long, int>> stationTimes;
    //customerId -> startStation
    unordered_map<int, pair<string,int>> inTransit;
    UndergroundSystem() {
          stationTimes.clear();
        inTransit.clear();
    }
    
    void checkIn(int id, string s, int t) {
      if(inTransit.find(id) != inTransit.end()) return;
        inTransit[id] = {s, t};
    }
    
    void checkOut(int id, string s, int t) {
        auto& info = inTransit[id];
        string startStation = info.first;
        int startTime = info.second;
        string key = startStation + ":" + s;
        int time = t - startTime;
        
        if(stationTimes.find(key) != stationTimes.end()) {
            auto& oldTimes = stationTimes[key];
            oldTimes.first += time;
            oldTimes.second++;
        } else {
            stationTimes[key] = {time, 1};
        }
        inTransit.erase(id);
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        string key = startStation + ":" + endStation;
        auto& info = stationTimes[key];
        double avg = (double)info.first / (double)info.second;
        return avg;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */