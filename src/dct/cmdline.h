/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.23
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "Area/DAP/Pattern spectrum"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "Area/DAP/Pattern spectrum"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "1.5"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * inprefix_arg;	/**< @brief Prefix of the filenames of input tiles (default='tile').  */
  char * inprefix_orig;	/**< @brief Prefix of the filenames of input tiles original value given at command line.  */
  const char *inprefix_help; /**< @brief Prefix of the filenames of input tiles help description.  */
  char * outprefix_arg;	/**< @brief Prefix of the filenames for the output tiles (default='out').  */
  char * outprefix_orig;	/**< @brief Prefix of the filenames for the output tiles original value given at command line.  */
  const char *outprefix_help; /**< @brief Prefix of the filenames for the output tiles help description.  */
  char * intype_arg;	/**< @brief filetype of the input tiles (default='pgm').  */
  char * intype_orig;	/**< @brief filetype of the input tiles original value given at command line.  */
  const char *intype_help; /**< @brief filetype of the input tiles help description.  */
  char * outtype_arg;	/**< @brief filetype of the output tiles.  */
  char * outtype_orig;	/**< @brief filetype of the output tiles original value given at command line.  */
  const char *outtype_help; /**< @brief filetype of the output tiles help description.  */
  int infile_arg;	/**< @brief Define how the input files are organized. 0: 1 file to be divided internally, 1: Each process takes a different file (see expected format names), 2: same file copied on all processes, 3: Combine RBG files (default='0').  */
  char * infile_orig;	/**< @brief Define how the input files are organized. 0: 1 file to be divided internally, 1: Each process takes a different file (see expected format names), 2: same file copied on all processes, 3: Combine RBG files original value given at command line.  */
  const char *infile_help; /**< @brief Define how the input files are organized. 0: 1 file to be divided internally, 1: Each process takes a different file (see expected format names), 2: same file copied on all processes, 3: Combine RBG files help description.  */
  int outfile_arg;	/**< @brief Define how the output files are organized. 0: 1 single file is written, 2: Each process writes his tile (see expected format names).  */
  char * outfile_orig;	/**< @brief Define how the output files are organized. 0: 1 single file is written, 2: Each process writes his tile (see expected format names) original value given at command line.  */
  const char *outfile_help; /**< @brief Define how the output files are organized. 0: 1 single file is written, 2: Each process writes his tile (see expected format names) help description.  */
  char * dataset_arg;	/**< @brief Name of the dataset if using HDF5 files.  */
  char * dataset_orig;	/**< @brief Name of the dataset if using HDF5 files original value given at command line.  */
  const char *dataset_help; /**< @brief Name of the dataset if using HDF5 files help description.  */
  int saveout_arg;	/**< @brief Save the output images. In case it needs to be deactivated for testing purposes (default='1').  */
  char * saveout_orig;	/**< @brief Save the output images. In case it needs to be deactivated for testing purposes original value given at command line.  */
  const char *saveout_help; /**< @brief Save the output images. In case it needs to be deactivated for testing purposes help description.  */
  int overlap_arg;	/**< @brief Save the output images. In case it needs to be deactivated for testing purposes (default='1').  */
  char * overlap_orig;	/**< @brief Save the output images. In case it needs to be deactivated for testing purposes original value given at command line.  */
  const char *overlap_help; /**< @brief Save the output images. In case it needs to be deactivated for testing purposes help description.  */
  int* grid_arg;	/**< @brief Number of tiles horizontally, vertically, in depth, comma separated.  */
  char ** grid_orig;	/**< @brief Number of tiles horizontally, vertically, in depth, comma separated original value given at command line.  */
  unsigned int grid_min; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated's minimum occurreces */
  unsigned int grid_max; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated's maximum occurreces */
  const char *grid_help; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated help description.  */
  int threads_arg;	/**< @brief Number of threads to use (default='1').  */
  char * threads_orig;	/**< @brief Number of threads to use original value given at command line.  */
  const char *threads_help; /**< @brief Number of threads to use help description.  */
  int bpp_arg;	/**< @brief Define the dynamic range (if different from 8, 16 or 32 bits) (default='8').  */
  char * bpp_orig;	/**< @brief Define the dynamic range (if different from 8, 16 or 32 bits) original value given at command line.  */
  const char *bpp_help; /**< @brief Define the dynamic range (if different from 8, 16 or 32 bits) help description.  */
  int refine_arg;	/**< @brief Transform the data in 16-bit per pixel if original range is higher (default='0').  */
  char * refine_orig;	/**< @brief Transform the data in 16-bit per pixel if original range is higher original value given at command line.  */
  const char *refine_help; /**< @brief Transform the data in 16-bit per pixel if original range is higher help description.  */
  char * image_arg;	/**< @brief Type of input: classic, rgb, lofar, sequence of 2D tiles to be combined internally (default='classic').  */
  char * image_orig;	/**< @brief Type of input: classic, rgb, lofar, sequence of 2D tiles to be combined internally original value given at command line.  */
  const char *image_help; /**< @brief Type of input: classic, rgb, lofar, sequence of 2D tiles to be combined internally help description.  */
  int negative_arg;	/**< @brief Transform the data in 16-bit per pixel if original range is higher (default='0').  */
  char * negative_orig;	/**< @brief Transform the data in 16-bit per pixel if original range is higher original value given at command line.  */
  const char *negative_help; /**< @brief Transform the data in 16-bit per pixel if original range is higher help description.  */
  int attribute_arg;	/**< @brief Choose the attribute to build the tree (default='0').  */
  char * attribute_orig;	/**< @brief Choose the attribute to build the tree original value given at command line.  */
  const char *attribute_help; /**< @brief Choose the attribute to build the tree help description.  */
  int attribute2_arg;	/**< @brief Choose the second attribute for the pattern spectrum (only works with the inertia tensor so far) (default='9').  */
  char * attribute2_orig;	/**< @brief Choose the second attribute for the pattern spectrum (only works with the inertia tensor so far) original value given at command line.  */
  const char *attribute2_help; /**< @brief Choose the second attribute for the pattern spectrum (only works with the inertia tensor so far) help description.  */
  int decision_arg;	/**< @brief Choose the pruning rule to filter the tree (default='0').  */
  char * decision_orig;	/**< @brief Choose the pruning rule to filter the tree original value given at command line.  */
  const char *decision_help; /**< @brief Choose the pruning rule to filter the tree help description.  */
  int flood_arg;	/**< @brief Choose the used flooding technique (deprecated). (default='0').  */
  char * flood_orig;	/**< @brief Choose the used flooding technique (deprecated). original value given at command line.  */
  const char *flood_help; /**< @brief Choose the used flooding technique (deprecated). help description.  */
  char * output_arg;	/**< @brief Choose the desired output (default='filter').  */
  char * output_orig;	/**< @brief Choose the desired output original value given at command line.  */
  const char *output_help; /**< @brief Choose the desired output help description.  */
  double lambda_arg;	/**< @brief Lambda value (default='100').  */
  char * lambda_orig;	/**< @brief Lambda value original value given at command line.  */
  const char *lambda_help; /**< @brief Lambda value help description.  */
  char * lvec_arg;	/**< @brief Lambda vector for  attribute (default='res/lvec.txt').  */
  char * lvec_orig;	/**< @brief Lambda vector for  attribute original value given at command line.  */
  const char *lvec_help; /**< @brief Lambda vector for  attribute help description.  */
  char * lvec2_arg;	/**< @brief Lambda vector for second attribute (default='res/lvec2.txt').  */
  char * lvec2_orig;	/**< @brief Lambda vector for second attribute original value given at command line.  */
  const char *lvec2_help; /**< @brief Lambda vector for second attribute help description.  */
  char * tree_arg;	/**< @brief Type of tree (Min or Max) (default='max').  */
  char * tree_orig;	/**< @brief Type of tree (Min or Max) original value given at command line.  */
  const char *tree_help; /**< @brief Type of tree (Min or Max) help description.  */
  char * morphology_arg;	/**< @brief Type of morphological operation (opening or closing) (default='opening').  */
  char * morphology_orig;	/**< @brief Type of morphological operation (opening or closing) original value given at command line.  */
  const char *morphology_help; /**< @brief Type of morphological operation (opening or closing) help description.  */
  int connectivity_arg;	/**< @brief Type of connectivity (4 or 8 for 2D, 6 or 26 for 3D) (default='4').  */
  char * connectivity_orig;	/**< @brief Type of connectivity (4 or 8 for 2D, 6 or 26 for 3D) original value given at command line.  */
  const char *connectivity_help; /**< @brief Type of connectivity (4 or 8 for 2D, 6 or 26 for 3D) help description.  */
  float imscale_arg;	/**< @brief Scale for lvec file (default='1.0').  */
  char * imscale_orig;	/**< @brief Scale for lvec file original value given at command line.  */
  const char *imscale_help; /**< @brief Scale for lvec file help description.  */
  float imscale2_arg;	/**< @brief Scale for lvec2 file (default='1.0').  */
  char * imscale2_orig;	/**< @brief Scale for lvec2 file original value given at command line.  */
  const char *imscale2_help; /**< @brief Scale for lvec2 file help description.  */
  int background_arg;	/**< @brief Account for background level in the pattern spectra (default='0').  */
  char * background_orig;	/**< @brief Account for background level in the pattern spectra original value given at command line.  */
  const char *background_help; /**< @brief Account for background level in the pattern spectra help description.  */
  char * verbosity_arg;	/**< @brief Add verbose output (default='WARN').  */
  char * verbosity_orig;	/**< @brief Add verbose output original value given at command line.  */
  const char *verbosity_help; /**< @brief Add verbose output help description.  */
  int savetree_arg;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) (default='0').  */
  char * savetree_orig;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) original value given at command line.  */
  const char *savetree_help; /**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) help description.  */
  char * somfile_arg;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used).  */
  char * somfile_orig;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) original value given at command line.  */
  const char *somfile_help; /**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) help description.  */
  int somsize_arg;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used).  */
  char * somsize_orig;	/**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) original value given at command line.  */
  const char *somsize_help; /**< @brief Save the component tree. Each process will save its local tree, so it can be reused later (the same number of process will have to be used) help description.  */
  int* somneuron_arg;	/**< @brief Number of tiles horizontally, vertically, in depth, comma separated.  */
  char ** somneuron_orig;	/**< @brief Number of tiles horizontally, vertically, in depth, comma separated original value given at command line.  */
  unsigned int somneuron_min; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated's minimum occurreces */
  unsigned int somneuron_max; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated's maximum occurreces */
  const char *somneuron_help; /**< @brief Number of tiles horizontally, vertically, in depth, comma separated help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int inprefix_given ;	/**< @brief Whether inprefix was given.  */
  unsigned int outprefix_given ;	/**< @brief Whether outprefix was given.  */
  unsigned int intype_given ;	/**< @brief Whether intype was given.  */
  unsigned int outtype_given ;	/**< @brief Whether outtype was given.  */
  unsigned int infile_given ;	/**< @brief Whether infile was given.  */
  unsigned int outfile_given ;	/**< @brief Whether outfile was given.  */
  unsigned int dataset_given ;	/**< @brief Whether dataset was given.  */
  unsigned int saveout_given ;	/**< @brief Whether saveout was given.  */
  unsigned int overlap_given ;	/**< @brief Whether overlap was given.  */
  unsigned int grid_given ;	/**< @brief Whether grid was given.  */
  unsigned int threads_given ;	/**< @brief Whether threads was given.  */
  unsigned int bpp_given ;	/**< @brief Whether bpp was given.  */
  unsigned int refine_given ;	/**< @brief Whether refine was given.  */
  unsigned int image_given ;	/**< @brief Whether image was given.  */
  unsigned int negative_given ;	/**< @brief Whether negative was given.  */
  unsigned int attribute_given ;	/**< @brief Whether attribute was given.  */
  unsigned int attribute2_given ;	/**< @brief Whether attribute2 was given.  */
  unsigned int decision_given ;	/**< @brief Whether decision was given.  */
  unsigned int flood_given ;	/**< @brief Whether flood was given.  */
  unsigned int output_given ;	/**< @brief Whether output was given.  */
  unsigned int lambda_given ;	/**< @brief Whether lambda was given.  */
  unsigned int lvec_given ;	/**< @brief Whether lvec was given.  */
  unsigned int lvec2_given ;	/**< @brief Whether lvec2 was given.  */
  unsigned int tree_given ;	/**< @brief Whether tree was given.  */
  unsigned int morphology_given ;	/**< @brief Whether morphology was given.  */
  unsigned int connectivity_given ;	/**< @brief Whether connectivity was given.  */
  unsigned int imscale_given ;	/**< @brief Whether imscale was given.  */
  unsigned int imscale2_given ;	/**< @brief Whether imscale2 was given.  */
  unsigned int background_given ;	/**< @brief Whether background was given.  */
  unsigned int verbosity_given ;	/**< @brief Whether verbosity was given.  */
  unsigned int savetree_given ;	/**< @brief Whether savetree was given.  */
  unsigned int somfile_given ;	/**< @brief Whether somfile was given.  */
  unsigned int somsize_given ;	/**< @brief Whether somsize was given.  */
  unsigned int somneuron_given ;	/**< @brief Whether somneuron was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_saveout_values[];  /**< @brief Possible values for saveout. */
extern const char *cmdline_parser_overlap_values[];  /**< @brief Possible values for overlap. */
extern const char *cmdline_parser_flood_values[];  /**< @brief Possible values for flood. */
extern const char *cmdline_parser_output_values[];  /**< @brief Possible values for output. */
extern const char *cmdline_parser_tree_values[];  /**< @brief Possible values for tree. */
extern const char *cmdline_parser_morphology_values[];  /**< @brief Possible values for morphology. */
extern const char *cmdline_parser_connectivity_values[];  /**< @brief Possible values for connectivity. */
extern const char *cmdline_parser_verbosity_values[];  /**< @brief Possible values for verbosity. */
extern const char *cmdline_parser_savetree_values[];  /**< @brief Possible values for savetree. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
