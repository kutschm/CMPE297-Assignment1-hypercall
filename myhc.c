#include <linux/kvm.h>

void main(void)
{
   struct kvm_vcpu *vcpu;

   vcpu = KVM_CREATE_VCPU;
}
