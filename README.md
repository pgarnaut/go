# meijin

Having another crack at implementing some Go engine ideas. Early days...

* http://en.wikipedia.org/wiki/Go_%28game%29
* http://www.lysator.liu.se/~gunnar/gtp/
* https://gcc.gnu.org/codingconventions.html


# gtp command list

quit
protocol_version
name
version
boardsize
query_boardsize
clear_board
orientation
query_orientation
komi
get_komi
black
playwhite
play
fixed_handicap
place_free_handicap
set_free_handicap
get_handicap
loadsgf
color
list_stones
countlib
findlib
accuratelib
accurate_approxlib
is_legal
all_legal
captures
last_move
move_history
invariant_hash
invariant_hash_for_moves
trymove
tryko
popgo
clear_cache
attack
attack_either
defend
does_attack
does_defend
ladder_attack
increase_depths
decrease_depths
owl_attack
owl_defend
owl_threaten_attack
owl_threaten_defense
owl_does_attack
owl_does_defend
owl_connection_defends
defend_both
owl_substantial
analyze_semeai
analyze_semeai_after_move
tactical_analyze_semeai
connect
disconnect
break_in
block_off
eval_eye
dragon_status
same_dragon
unconditional_status
combination_attack
combination_defend
aa_confirm_safety
genmove_black
genmove_white
genmove
reg_genmove
gg_genmove
restricted_genmove
kgs-genmove_cleanup
level
undo
gg-undo
time_settings
time_left
final_score
final_status
final_status_list
estimate_score
experimental_score
reset_life_node_counter
get_life_node_counter
reset_owl_node_counter
get_owl_node_counter
reset_reading_node_counter
get_reading_node_counter
reset_trymove_counter
get_trymove_counter
reset_connection_node_counter
get_connection_node_counter
test_eyeshape
analyze_eyegraph
cputime
showboard
dump_stack
initial_influence
move_influence
move_probabilities
move_uncertainty
followup_influence
worm_data
worm_stones
worm_cutstone
dragon_data
dragon_stones
eye_data
half_eye_data
start_sgftrace
finish_sgftrace
printsgf
tune_move_ordering
echo
echo_err
help
known_command
report_uncertainty
get_random_seed
set_random_seed
advance_random_seed
is_surrounded
does_surround
surround_map
set_search_diamond
reset_search_mask
limit_search
set_search_limit
draw_search_area

## most important gtp commands to get started:
* quit
* name
* boardsize
* genmove
* TODO: handful of others
