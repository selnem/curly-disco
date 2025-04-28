import torch
v_size=5
d_mod=4
ep=torch.arange(v_size*d_mod).reshape(v_size,d_mod)
max_l=3

pe=torch.arange(max_l*d_mod).reshape(max_l,d_mod)
pe=pe.unsqueeze(0)
input_id=torch.tensor([[0,1],[2,3]])
tok_e=ep[input_id]
print(ep)
print(tok_e)
print(tok_e.shape)
#x=tok_e+pe[:,:tok_e.shape[1],:]

#print(x)

