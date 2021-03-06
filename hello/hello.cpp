#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>


using namespace eosio;

class hello : public contract {
  public:
    using contract::contract;

    [[eosio::action]]
    void hi( name user ) {
	    require_auth(user);
        print( "Hello, ", name{user});
    	//eosio_assert(0, "哈啊哈{ab,c,c,c,c,c,c,}");
      }
	  
	[[eosio::action]]
     void hi2() {
		require_auth(_self);
		print( "Hello, ", _self.to_string());

   }
};
//EOSIO_DISPATCH( hello, (hi)(hi2))

