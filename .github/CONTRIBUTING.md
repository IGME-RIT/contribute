# Contributing

Thank you for taking the time to contribute to Atlas!

The following document is a set of guidelines for contributing to the Atlas Project, which encompasses all the projects in the [IGME-RIT](https://github.com/igme-rit) organization as well as the backend and interface exposing their connections to the public. These are just guidelines, not rules, so please use your best judgment and feel free to propose changes to this document in a pull request. 

## Getting Started

### Code of Conduct

This project adheres to the Contributor Covenant [code of conduct](../CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to the current active maintainer.

### GitHub

The contribution model the Atlas Project is centered around depends heavily on GitHub's pull request workflow. Chances are if you're considering contributing you already have an account with GitHub, but in case you don't, make sure you have a [GitHub account](https://github.com/signup/free).


## How Can I Contribute?

### Reporting Bugs and Suggesting Enhancements

Bugs and Enhancements are tracked as GitHub issues. After you've determined which repository your bug is related to, create an issue on that repository and provide the following information. If it's a problem with Atlas itself, create the issue on the [Atlas front-end](https://github.com/igme-rit/igme-rit.github.io) repo.

Explain the problem and include additional details to help maintainers reproduce the problem:

* Use a clear and descriptive title for the issue to identify the problem.
* Describe the exact steps which reproduce the problem in as many details as possible. When listing steps, don't just say what you did, but explain how you did it.
* Provide specific examples to demonstrate the steps. Include links to files or GitHub projects, or copy/pasteable snippets, which you use in those examples. If you're providing snippets in the issue, use Markdown code blocks.
* Describe the behavior you observed after following the steps and point out what exactly is the problem with that behavior.
* Explain which behavior you expected to see instead and why.
* If applicable, include screenshots and animated GIFs which show you following the described steps and clearly demonstrate the problem. 
* If the problem wasn't triggered by a specific action, describe what you were doing before the problem happened and share more information using the guidelines below.


### Requesting a Project or New Topic

Project requests are tracked as GitHub issues on this repository. If you believe that a particular subject or topic should be covered and it currently isn't satisfied by an existing project, you should create an issue for it. 

##### What makes a good project?

A good project introduces either one large topic or a few small ones, and builds on previous projects. 

##### Project Proposal Template

Since the default issue template is for bugs and enhancement reports, here is the template for project requests:

```markdown
[Description of proposal]

#### Subject(s) this proposal covers

[Describe the topic(s) that this tutorial would introduce]

#### Existing projects it should follow after:

[Name one or more projects and describe the connection from each to this one]

#### Extra reading

[Essential readings for this subject, if any]

#### Additional information:

[Any additional notes for this proposal]
```

### Contributing a New Project

New projects are added to this repository as pull requests. The current project maintainer will triage new pull requests. In order for your pull request to be approved, you will need the following: 

* An issue on this repo proposing your new project, referenced in the pull request
* An approval label on that issue assigned from the current project maintainer denoting it as an approved new project
* A functioning project that will run with the latest tooling
	* For C++, test with the latest Visual Studio and CMake
	* For C#, test with either the latest Visual Studio or the latest Mono
	* For web, test with either the latest version of the major browsers or with Node.js

### Contributing to an Existing Project

Project issues can be resolved by the community as pull requests. The current project maintainer will triage new pull requests. In order for your pull request to be approved, you will need the following: 

* An issue on the repo referenced in the pull request
* An approval label on that issue assigned from the current project maintainer denoting it as an approved new project
* If the project has CI, the tests must pass. Make sure your contribution adds tests for your new code.

## Style Guides

### Git Commit Messages

* Use the present tense ("Add feature", not "Added feature")
* Use the imperative mood ("Move cursor to...", not "Moves cursor to...")
* Limit the first line to 72 characters or less
* Reference issues and pull requests liberally
* If the project has CI, add [skip ci] in a new line if you're just modifying documentation

(Inspiration for most of this taken from the Atom editor [contribution guidelines](https://github.com/atom/atom/blob/master/CONTRIBUTING.md))