//defining a pair hashing function
struct pair_hash {
    inline std::size_t operator()(const std::pair<lli,lli> & v) const {
        return v.first*61+v.second;
    }
  
  //defing an unordered set(hashset) of pairs 
  unordered_set<pair<lli,lli>,  pair_hash> us;
  
  //inserting into unordered set
  us.insert(make_pair(i , j));
