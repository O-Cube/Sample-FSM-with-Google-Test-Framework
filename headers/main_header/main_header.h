#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H


/* Definition of state variable */
enum state 
{
	HOME = 0,
	GYM,
	GROCERY_SHOP,
	FRIEND,
};

/* Definition of events */
enum events 
{
	FEEL_GOOD = 0,
	FEEL_TIRED,
	NEED_SOMETHING,
	SAY_HELLO_TO_FRIEND,
	GREET_A_FRIEND,
	BUY_A_DRINK,
	GO_HOME,
};

/* Define a functional state, a functional state has 2 elements: state and a pointer to a transition function */
typedef struct {
	enum state state;
	void (*function)(void);
} functional_state;

#endif //define MAIN_HEADER_H
#ifdef __cplusplus
}
#endif
