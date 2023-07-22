#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RopeActorBase.generated.h"

class UPhysicsConstraintComponent;
class UPhysicsTweenComponent;
class UPrimitiveComponent;
class URopeComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API ARopeActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* EndpointConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* EndpointRopeAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* SourceConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SourceRopeAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URopeComponent* RopeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsTweenComponent* PhysicsTween;
    
    ARopeActorBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedSourceToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime, UPrimitiveComponent* AttachPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttachedEndpointToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime, UPrimitiveComponent* AttachPrimitive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float IsRopeUnstable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachingSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachingEndpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSourceTweenID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEndpointTweenID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCurrentSourceAttachment(FName& OutSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCurrentEndpointAttachment(FName& OutSocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float CalculateInstability() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachSourceToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime);
    
    UFUNCTION(BlueprintCallable)
    bool AttachEndpointToComponent(USceneComponent* Component, const FTransform& Transform, FName SocketName, bool bSimulatePhysics, float AttachTime);
    
};

