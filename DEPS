use_relative_paths = True

vars = {
  'github': 'https://github.com',

  'abseil_revision': '79ca5d7aad63973c83a4962a66ab07cd623131ea',

  'effcee_revision': '19b4aa87af25cb4ee779a071409732f34bfc305c',

  'googletest_revision': 'fb11778f43d5844ca9e2016bae75b22d26ea451f',

  # Use protobufs before they gained the dependency on abseil
  'protobuf_revision': 'v21.12',

  're2_revision': '7c5e396af825562ec8321fdbf2f1cf276b26e3ae',
  'spirv_headers_revision': '10db9d4e194246a020a4148e220837ac7c68cfd9',
}

deps = {
  'external/abseil_cpp':
      Var('github') + '/abseil/abseil-cpp.git@' + Var('abseil_revision'),

  'external/effcee':
      Var('github') + '/google/effcee.git@' + Var('effcee_revision'),

  'external/googletest':
      Var('github') + '/google/googletest.git@' + Var('googletest_revision'),

  'external/protobuf':
      Var('github') + '/protocolbuffers/protobuf.git@' + Var('protobuf_revision'),

  'external/re2':
      Var('github') + '/google/re2.git@' + Var('re2_revision'),

  'external/spirv-headers':
      Var('github') +  '/KhronosGroup/SPIRV-Headers.git@' +
          Var('spirv_headers_revision'),
}

