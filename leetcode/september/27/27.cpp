class MyCalendarTwo {
    vector<pair<int, int>> bookings;
    vector<pair<int, int>> overlapBookings;
    bool doesOverlap(int start1, int end1, int start2, int end2) {
        return max(start1, start2) < min(end1, end2);
    }

    pair<int, int> getOverlapped(int start1, int end1, int start2, int end2) {
        return { max(start1, start2), min(end1, end2) };
    }
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto i: overlapBookings) 
            if(doesOverlap(i.first, i.second, start, end)) 
                return false;
        
        for(auto i: bookings) 
            if(doesOverlap(i.first, i.second, start, end)) 
                overlapBookings.push_back(getOverlapped(i.first, i.second, start, end));

        bookings.push_back({ start, end });
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
