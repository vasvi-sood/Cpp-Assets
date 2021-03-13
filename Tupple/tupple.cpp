//tupple creation
vector<tuple<int,int,int,int>> vec;
vec.push_back(make_tuple(1,3,2,1));
vec.push_back({-1,2,3,4});

//swapping two tupples
vec[0].swap(vec[1]);

//reassigning a tupple value
get<0>(vec[0])=56748;

//accesing tupple values
 std::cout<<get<0>(vec[0])<<get<2>(vec[0])<<get<1>(vec[0])<<endl;
