#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Current placeholder for merkly code in c
void lamport_key_gen(uint8_t **public_keys, uint8_t **secret_keys){
  public_keys[0] = hash(secret_keys[0]);
  public_keys[1] = hash(secret_keys[1]);
  return;
}

void lamport_sign(uint8_t *sig, uint8_t msg, uint8_t **secret_keys){
  if (msg)
    sig =  secret_keys[0];
  else
    sig =  secret_keys[1];
  return;
}

int lamport_verify(uint8_t msg, uint8_t *sig, uint8_t **public_keys){
  uint8_t putative_key[32] = hash(sig);
  int ret;
  if (msg)
    ret = memcmp(putative_key, public_keys[0], 32);
  else
    ret = memcmp(putative_key, public_keys[1], 32);

  return (1 - ret);
}

int main(){
  return 0;
}
