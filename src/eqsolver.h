#ifndef eqsolver_h
#define eqsolver_h

#if defined _WIN32 || defined __CYGWIN__
	#ifdef eqsolver_EXPORTS // define this when generating DLL
		#ifdef __GNUC__
			#define DLL_PUBLIC __attribute__((dllexport))
		#else
			#define DLL_PUBLIC __declspec(dllexport)
		#endif 
	#else
		#ifdef __GNUC__
			#define DLL_PUBLIC __attribute__((dllimport))
		#else
			#define DLL_PUBLIC __declspec(dllimport)
		#endif
	#endif
	#define DLL_HIDDEN 
#else
	#if __GNUC__ >= 4
		#define DLL_PUBLIC __attribute__ ((visibility("default"))) 
		#define DLL_HIDDEN __attribute__ ((visibility("hidden")))
	#else
		#define DLL_PUBLIC 
		#define DLL_HIDDEN
	#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

DLL_PUBLIC int solve_quadratic_eq(const double (*coeffs)[3], double (*roots)[4]);

#ifdef __cplusplus
}
#endif

#endif /* eqsolver_h */
