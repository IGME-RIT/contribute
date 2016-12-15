# Contribute to ATLAS

#### Requests

We are always trying to improve the quality of our projects here on Atlas.
If there's a topic or example you'd like for us to cover, please make an issue on this repository.
The thread will be used for our maintainers and contributors to discuss/develop a tutorial.


#### Contributing Code

If you'd like to contribute a project, we have a few submission guidelines:

Please read our [Code of Conduct](https://github.com/IGME-RIT/contribute/blob/master/CODE_OF_CONDUCT.md) before posting.


__All projects must have the following files in the root directory:__

 - README.md: Must contain a helpful description of the project.
 - LICENSE.md: We use GPL.
 - igme_config.yml: Markup that we use to organize and track projects on the [Atlas front-end](http://igme-rit.github.io/).
 - igme_thumbnail.png: An image to be used alongside the project on our front-end.


__C++ Projects__
We use CMake for our build system to avoid distributing Visual Studio Files.
Any new C++ projects should use a similar build system.
An example project can be found in the baseProjects directory of this repository.


__If your project follows these general these general formatting guidelines:__

 - A tutorial will be added to the contribute repository as a pull request to the root directory for triaging.
 - An active maintainer will inspect the tutorial and either approve it, provide feedback, or reject the submission.
 - An active maintainer may edit any files for use with the [Atlas front-end](http://igme-rit.github.io/).
 - An active maintainer will break off the tutorial into its own repository under the IGME-RIT organization and remove the tutorial from the contribute repository.


__If there are no guidelines for the project you wish to submit:__
We currently only have a standard for C++ examples, but we would love to have other examples on Atlas as well.
Feel free to make an issue on this repository. Our maintainers are happy to help you find a good way to contribute your project.
