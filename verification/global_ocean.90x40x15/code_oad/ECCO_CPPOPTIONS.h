#ifndef ECCO_CPPOPTIONS_H
#define ECCO_CPPOPTIONS_H

C-- Collect here, in a single option-file, options to control which optional
C   features to compile in packages AUTODIFF, COST, CTRL, ECCO, CAL and EXF.
C   If used, this option-file needs to be directly included in CPP_OPTIONS.h
C   Although this method, inherited from ECCO setup, has been traditionally
C   used for all adjoint built, work is in progess to allow to use the
C   standard metod (each of the above pkg get its own options from its
C   specific option-file) also for adjoint built.

C ********************************************************************
C ***                  Adjoint Support Package                     ***
C ********************************************************************

C o Include/exclude code in order to be able to automatically
C   differentiate the MITgcmUV by using the Tangent Linear and
C   Adjoint Model Compiler (TAMC).

#undef ALLOW_AUTODIFF_TAMC

C       >>> Checkpointing as handled by TAMC
#define ALLOW_TAMC_CHECKPOINTING

C       >>> Extract adjoint state
#define ALLOW_AUTODIFF_MONITOR

C       >>> DO 2-level checkpointing instead of 3-level
#undef AUTODIFF_2_LEVEL_CHECKPOINT

C o use divided adjoint to split adjoint computations
#undef ALLOW_DIVIDED_ADJOINT

C o TAMC compatible subroutine parameter list
#undef AUTODIFF_TAMC_COMPATIBILITY

C ********************************************************************
C ***                     Calendar Package                         ***
C ********************************************************************

C CPP flags controlling which code is included in the files that
C will be compiled.

CPH >>>>>> THERE ARE NO MORE CAL OPTIONS TO BE SET <<<<<<

C ********************************************************************
C ***                Cost function Package                         ***
C ********************************************************************

C       >>> Cost function contributions
#undef ALLOW_COST_TEST
#undef ALLOW_COST_TRACER
#define ALLOW_COST_ATLANTIC_HEAT

C ********************************************************************
C ***               Control vector Package                         ***
C ********************************************************************

#undef  ALLOW_NONDIMENSIONAL_CONTROL_IO
#undef ALLOW_TAMC_SINGLEPREC_COMLEV

C       >>> Initial values.
#define ALLOW_THETA0_CONTROL
#define ALLOW_SALT0_CONTROL
#undef ALLOW_TR10_CONTROL
#define ALLOW_TAUU0_CONTROL
#define ALLOW_TAUV0_CONTROL
#define ALLOW_SFLUX0_CONTROL
#define ALLOW_HFLUX0_CONTROL
#undef ALLOW_SSS0_CONTROL
#undef ALLOW_SST0_CONTROL
#define ALLOW_DIFFKR_CONTROL
cph#define ALLOW_KAPGM_CONTROL

C ********************************************************************
#endif /* ECCO_CPPOPTIONS_H */
